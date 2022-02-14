
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int) ;
 int VAR_2 ;
 int * FUNC_3 (int *,int const*,int const*) ;
 int * FUNC_4 (int *,int const*) ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static const u_char *
FUNC_6(netdissect_options *VAR_4,
          register const u_char *VAR_5, register const u_char *VAR_6, int VAR_7)
{
 register const u_char *VAR_8 = VAR_5;
 register u_int VAR_9, VAR_10;

 VAR_5 = FUNC_4(VAR_4, VAR_5);

 if (VAR_5 == ((void*)0) || !FUNC_2(*VAR_5, 4))
  return(((void*)0));


 VAR_9 = FUNC_0(VAR_5);
 VAR_5 += 2;
 FUNC_1((VAR_4, " %s", FUNC_5(VAR_3, "Type%d", VAR_9)));

 VAR_9 = FUNC_0(VAR_5);
 VAR_5 += 2;
 if (VAR_7)
  VAR_10 = (VAR_9 & ~VAR_1);
 else
  VAR_10 = VAR_9;
 if (VAR_10 != VAR_0)
  FUNC_1((VAR_4, " %s", FUNC_5(VAR_2, "(Class %d)", VAR_10)));
 if (VAR_7) {
  FUNC_1((VAR_4, VAR_9 & VAR_1 ? " (QU)" : " (QM)"));
 }

 FUNC_1((VAR_4, "? "));
 VAR_5 = FUNC_3(VAR_4, VAR_8, VAR_6);
 return(VAR_5 ? VAR_5 + 4 : ((void*)0));
}
