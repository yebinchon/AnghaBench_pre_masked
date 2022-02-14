
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *,int const*,int) ;
 int VAR_1 ;

void
FUNC_5(netdissect_options *VAR_2, const u_char *VAR_3, u_int VAR_4)
{
 u_int VAR_5 = VAR_4, VAR_6;

 FUNC_2(*VAR_3, 2);
 if (VAR_5 < 2)
  goto trunc;
 VAR_6 = FUNC_0(VAR_3) & VAR_0;
        FUNC_1((VAR_2, "GREv%u",VAR_6));

        switch(VAR_6) {
        case 0:
            FUNC_3(VAR_2, VAR_3, VAR_5);
            break;
        case 1:
            FUNC_4(VAR_2, VAR_3, VAR_5);
            break;
 default:
            FUNC_1((VAR_2, " ERROR: unknown-version"));
            break;
        }
        return;

trunc:
 FUNC_1((VAR_2, "%s", VAR_1));
 return;
}
