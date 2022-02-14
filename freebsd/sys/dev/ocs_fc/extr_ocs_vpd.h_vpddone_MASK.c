
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ offset; scalar_t__ length; } ;
typedef TYPE_1__ vpdbuf_t ;



__attribute__((used)) static inline int
FUNC_0(vpdbuf_t *VAR_0)
{
 return VAR_0->offset >= VAR_0->length;
}
