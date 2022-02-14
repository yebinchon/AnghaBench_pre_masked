
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct resource* FUNC_0 (int ,int ,int*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_4)
{
 struct resource *VAR_5;
 int VAR_6;

 VAR_6 = 0;
 VAR_5 = FUNC_0(VAR_4, VAR_1,
     &VAR_6, VAR_2, VAR_2 + VAR_3 - 1,
     VAR_3, VAR_0);
 if (VAR_5 == ((void*)0))
  FUNC_1("Unable to reserve vt_vga memory");
 return (0);
}
