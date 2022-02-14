
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cur_max; int mode; scalar_t__ preffered_endian; } ;
typedef TYPE_1__ _UTF1632EncodingInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (TYPE_1__*,void const*,size_t) ;

__attribute__((used)) static int

FUNC_2(_UTF1632EncodingInfo * __restrict VAR_3,
    const void * __restrict VAR_4, size_t VAR_5)
{

 FUNC_0((void *)VAR_3, 0, sizeof(*VAR_3));

 FUNC_1(VAR_3, VAR_4, VAR_5);

 VAR_3->cur_max = ((VAR_3->mode&VAR_2) == 0) ? 6 : 8;



 if (VAR_3->preffered_endian == VAR_1) {
  VAR_3->preffered_endian = VAR_0;
 }

 return (0);
}
