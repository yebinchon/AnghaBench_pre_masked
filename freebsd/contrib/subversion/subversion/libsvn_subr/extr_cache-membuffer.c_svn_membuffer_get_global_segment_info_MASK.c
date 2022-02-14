
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ total_hits; scalar_t__ total_writes; scalar_t__ total_reads; } ;
typedef TYPE_1__ svn_membuffer_t ;
typedef int svn_error_t ;
struct TYPE_9__ {int hits; int sets; int gets; } ;
typedef TYPE_2__ svn_cache__info_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_membuffer_t *VAR_2,
                                      svn_cache__info_t *VAR_3)
{
  VAR_3->gets += VAR_2->total_reads;
  VAR_3->sets += VAR_2->total_writes;
  VAR_3->hits += VAR_2->total_hits;

  FUNC_0(VAR_2,
                  FUNC_1(VAR_2, VAR_3, VAR_1));

  return VAR_0;
}
