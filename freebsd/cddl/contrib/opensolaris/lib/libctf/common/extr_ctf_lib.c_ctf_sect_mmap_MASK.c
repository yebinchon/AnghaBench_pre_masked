
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t cts_offset; scalar_t__ cts_data; scalar_t__ cts_size; } ;
typedef TYPE_1__ ctf_sect_t ;
typedef scalar_t__ caddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,int ,int ,int,size_t) ;

const void *
FUNC_1(ctf_sect_t *VAR_4, int VAR_5)
{
 size_t VAR_6 = VAR_4->cts_offset & ~VAR_3;

 caddr_t VAR_7 = FUNC_0(((void*)0), VAR_4->cts_size + VAR_6, VAR_2,
     VAR_1, VAR_5, VAR_4->cts_offset & VAR_3);

 if (VAR_7 != VAR_0)
  VAR_4->cts_data = VAR_7 + VAR_6;

 return (VAR_7);
}
