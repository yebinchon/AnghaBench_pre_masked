
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct hostinfo {int n; scalar_t__* addrs; void* name; } ;
struct hostent {scalar_t__ h_addrtype; int h_length; char* h_name; char** h_addr_list; } ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ,char*) ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int,int) ;
 struct hostent* FUNC_2 (int *,char*) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 struct hostent* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__*,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_7 (char*) ;
 char* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char*) ;

struct hostinfo *
FUNC_10(register char *VAR_6)
{
 register int VAR_7;
 register struct hostent *VAR_8;
 register struct hostinfo *VAR_9;
 register char **VAR_10;
 register u_int32_t VAR_11, *VAR_12;

 if (FUNC_9(VAR_6) >= VAR_1) {
  FUNC_0(VAR_5, "%s: hostname \"%.32s...\" is too long\n",
      VAR_4, VAR_6);
  FUNC_3(1);
 }
 VAR_9 = FUNC_1(1, sizeof(*VAR_9));
 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_5, "%s: calloc %s\n", VAR_4, FUNC_8(VAR_3));
  FUNC_3(1);
 }
 VAR_11 = FUNC_5(VAR_6);
 if ((int32_t)VAR_11 != -1) {
  VAR_9->name = FUNC_7(VAR_6);
  VAR_9->n = 1;
  VAR_9->addrs = FUNC_1(1, sizeof(VAR_9->addrs[0]));
  if (VAR_9->addrs == ((void*)0)) {
   FUNC_0(VAR_5, "%s: calloc %s\n",
       VAR_4, FUNC_8(VAR_3));
   FUNC_3(1);
  }
  VAR_9->addrs[0] = VAR_11;
  return (VAR_9);
 }






  VAR_8 = FUNC_4(VAR_6);
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_5, "%s: unknown host %s\n", VAR_4, VAR_6);
  FUNC_3(1);
 }
 if (VAR_8->h_addrtype != VAR_0 || VAR_8->h_length != 4) {
  FUNC_0(VAR_5, "%s: bad host %s\n", VAR_4, VAR_6);
  FUNC_3(1);
 }
 VAR_9->name = FUNC_7(VAR_8->h_name);
 for (VAR_7 = 0, VAR_10 = VAR_8->h_addr_list; *VAR_10 != ((void*)0); ++VAR_7, ++VAR_10)
  continue;
 VAR_9->n = VAR_7;
 VAR_9->addrs = FUNC_1(VAR_7, sizeof(VAR_9->addrs[0]));
 if (VAR_9->addrs == ((void*)0)) {
  FUNC_0(VAR_5, "%s: calloc %s\n", VAR_4, FUNC_8(VAR_3));
  FUNC_3(1);
 }
 for (VAR_12 = VAR_9->addrs, VAR_10 = VAR_8->h_addr_list; *VAR_10 != ((void*)0); ++VAR_12, ++VAR_10)
  FUNC_6(VAR_12, *VAR_10, sizeof(*VAR_12));
 return (VAR_9);
}
