
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicpf {int * reg_base; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct nicpf *VAR_5)
{
 device_t VAR_6;
 int VAR_7;

 VAR_6 = VAR_5->dev;

 VAR_7 = VAR_3;
 VAR_5->reg_base = FUNC_0(VAR_6, VAR_2, &VAR_7,
     VAR_1);
 if (VAR_5->reg_base == ((void*)0)) {

  if (VAR_4) {
   FUNC_1(VAR_6,
       "Could not allocate registers memory\n");
  }
  return (VAR_0);
 }

 return (0);
}
