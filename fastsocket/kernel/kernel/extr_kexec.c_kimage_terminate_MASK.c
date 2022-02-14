
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {scalar_t__* entry; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct kimage *VAR_1)
{
 if (*VAR_1->entry != 0)
  VAR_1->entry++;

 *VAR_1->entry = VAR_0;
}
