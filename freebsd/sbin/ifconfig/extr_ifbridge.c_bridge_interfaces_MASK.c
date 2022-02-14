
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbreq {int ifbr_ifsflags; int ifbr_addrmax; int ifbr_portno; int ifbr_priority; int ifbr_path_cost; size_t ifbr_proto; size_t ifbr_role; size_t ifbr_state; int ifbr_ifsname; } ;
struct ifbifconf {int ifbic_len; char* ifbic_buf; struct ifbreq* ifbic_req; } ;
typedef int bifc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,struct ifbifconf*,int,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char) ;
 size_t FUNC_4 (char**) ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (char*,...) ;
 char* FUNC_7 (char*,int) ;
 char** VAR_3 ;
 char** VAR_4 ;
 char** VAR_5 ;
 char* FUNC_8 (char const*) ;

__attribute__((used)) static void
FUNC_9(int VAR_6, const char *VAR_7)
{
 struct ifbifconf VAR_8;
 struct ifbreq *VAR_9;
 char *VAR_10 = ((void*)0), *VAR_11;
 char *VAR_12, *VAR_13;
 int VAR_14, VAR_15 = 8192;

 VAR_13 = FUNC_8(VAR_7);
 if (VAR_13 == ((void*)0))
  FUNC_1(1, "strdup");

 for (VAR_12 = VAR_13; *VAR_12 != '\0'; VAR_12++) {
  if(FUNC_3(*VAR_12))
   *VAR_12 = ' ';
 }

 for (;;) {
  VAR_11 = FUNC_7(VAR_10, VAR_15);
  if (VAR_11 == ((void*)0))
   FUNC_1(1, "unable to allocate interface buffer");
  VAR_8.ifbic_len = VAR_15;
  VAR_8.ifbic_buf = VAR_10 = VAR_11;
  if (FUNC_0(VAR_6, VAR_0, &VAR_8, sizeof(VAR_8), 0) < 0)
   FUNC_1(1, "unable to get interface list");
  if ((VAR_8.ifbic_len + sizeof(*VAR_9)) < VAR_15)
   break;
  VAR_15 *= 2;
 }

 for (VAR_14 = 0; VAR_14 < VAR_8.ifbic_len / sizeof(*VAR_9); VAR_14++) {
  VAR_9 = VAR_8.ifbic_req + VAR_14;
  FUNC_6("%s%s ", VAR_7, VAR_9->ifbr_ifsname);
  FUNC_5("flags", VAR_9->ifbr_ifsflags, VAR_1);
  FUNC_6("\n");

  FUNC_6("%s", VAR_13);
  FUNC_6("ifmaxaddr %u", VAR_9->ifbr_addrmax);
  FUNC_6(" port %u priority %u", VAR_9->ifbr_portno,
      VAR_9->ifbr_priority);
  FUNC_6(" path cost %u", VAR_9->ifbr_path_cost);

  if (VAR_9->ifbr_ifsflags & VAR_2) {
   if (VAR_9->ifbr_proto < FUNC_4(VAR_3))
    FUNC_6(" proto %s", VAR_3[VAR_9->ifbr_proto]);
   else
    FUNC_6(" <unknown proto %d>",
        VAR_9->ifbr_proto);

   FUNC_6("\n%s", VAR_13);
   if (VAR_9->ifbr_role < FUNC_4(VAR_4))
    FUNC_6("role %s", VAR_4[VAR_9->ifbr_role]);
   else
    FUNC_6("<unknown role %d>",
        VAR_9->ifbr_role);
   if (VAR_9->ifbr_state < FUNC_4(VAR_5))
    FUNC_6(" state %s", VAR_5[VAR_9->ifbr_state]);
   else
    FUNC_6(" <unknown state %d>",
        VAR_9->ifbr_state);
  }
  FUNC_6("\n");
 }
 FUNC_2(VAR_13);
 FUNC_2(VAR_10);
}
