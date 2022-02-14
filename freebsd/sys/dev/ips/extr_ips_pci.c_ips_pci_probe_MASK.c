
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(device_t VAR_7)
{

        if ((FUNC_2(VAR_7) == VAR_5) &&
     (FUNC_1(VAR_7) == VAR_4)) {
  FUNC_0(VAR_7, "IBM ServeRAID Adapter");
                return (VAR_0);
        } else if ((FUNC_2(VAR_7) == VAR_5) &&
     (FUNC_1(VAR_7) == VAR_2)) {
  FUNC_0(VAR_7, "IBM ServeRAID Adapter");
  return (VAR_0);
        } else if ((FUNC_2(VAR_7) == VAR_6) &&
     (FUNC_1(VAR_7) == VAR_3)) {
  FUNC_0(VAR_7, "Adaptec ServeRAID Adapter");
  return (VAR_0);
 }
        return(VAR_1);
}
