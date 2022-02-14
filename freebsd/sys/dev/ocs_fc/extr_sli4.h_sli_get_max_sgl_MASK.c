
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int sgl_page_sizes; int max_sgl_pages; } ;
struct TYPE_5__ {TYPE_1__ config; int os; } ;
typedef TYPE_2__ sli4_t ;
typedef int sli4_sge_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static inline uint32_t
FUNC_1(sli4_t *VAR_1)
{

 if (VAR_1->config.sgl_page_sizes != 1) {
  FUNC_0(VAR_1->os, "unsupported SGL page sizes %#x\n",
    VAR_1->config.sgl_page_sizes);
  return 0;
 }

 return ((VAR_1->config.max_sgl_pages * VAR_0) / sizeof(sli4_sge_t));
}
