
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sc_info*) ;
 int FUNC_2 (int ) ;
 struct sc_info* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
       struct sc_info *VAR_2;

       VAR_2 = FUNC_3(VAR_1);

       if (FUNC_1(VAR_2) == -1) {
           FUNC_0(VAR_1, "unable to reinitialize the card\n");
           return VAR_0;
       }
       if (FUNC_2(VAR_1) == -1) {
               FUNC_0(VAR_1, "unable to reinitialize the mixer\n");
               return VAR_0;
       }
       return 0;
}
