
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int const*,size_t) ;
 int FUNC_1 (char*,int,unsigned long) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;

__attribute__((used)) static int FUNC_3(void *VAR_3, int VAR_4, const u8 *VAR_5,
     size_t VAR_6)
{
 FUNC_1("WPA: eapol_test_eapol_send(type=%d len=%lu)\n",
        VAR_4, (unsigned long) VAR_6);
 if (VAR_4 == VAR_0) {
  FUNC_2(VAR_1, "TX EAP -> RADIUS", VAR_5, VAR_6);
  FUNC_0(&VAR_2, VAR_5, VAR_6);
 }
 return 0;
}
