
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void sym_hist ;
struct annotation {TYPE_1__* src; } ;
struct TYPE_2__ {int sizeof_sym_hist; int histograms; } ;



__attribute__((used)) static inline struct sym_hist *FUNC_0(struct annotation *VAR_0, int VAR_1)
{
 return (((void *)&VAR_0->src->histograms) +
   (VAR_0->src->sizeof_sym_hist * VAR_1));
}
