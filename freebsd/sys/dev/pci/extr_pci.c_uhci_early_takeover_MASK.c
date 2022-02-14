
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct resource* FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int ,int,struct resource*) ;
 int FUNC_2 (struct resource*,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_6)
{
 struct resource *VAR_7;
 int VAR_8;







 FUNC_3(VAR_6, VAR_0, VAR_1, 2);


 VAR_8 = VAR_2;
 VAR_7 = FUNC_0(VAR_6, VAR_4, &VAR_8, VAR_3);
 if (VAR_7 != ((void*)0)) {
  FUNC_2(VAR_7, VAR_5, 0);
  FUNC_1(VAR_6, VAR_4, VAR_8, VAR_7);
 }
}
