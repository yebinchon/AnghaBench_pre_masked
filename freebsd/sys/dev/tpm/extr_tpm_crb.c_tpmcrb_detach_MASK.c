
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpm_sc {int * mem_res; int mem_rid; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 struct tpm_sc* FUNC_1 (int ) ;
 int FUNC_2 (struct tpm_sc*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct tpm_sc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 FUNC_2(VAR_2);

 if (VAR_2->mem_res != ((void*)0))
  FUNC_0(VAR_1, VAR_0,
      VAR_2->mem_rid, VAR_2->mem_res);

 return (0);
}
