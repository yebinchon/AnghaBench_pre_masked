
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct page {TYPE_3__* mapping; } ;
typedef int journal_t ;
struct TYPE_8__ {TYPE_1__* journal; } ;
struct TYPE_7__ {TYPE_2__* host; } ;
struct TYPE_6__ {int i_sb; } ;
struct TYPE_5__ {int * j_journal; } ;


 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (int *,struct page*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct page *VAR_0, unsigned long VAR_1)
{
 journal_t *VAR_2 = FUNC_0(VAR_0->mapping->host->i_sb)->journal->j_journal;

 FUNC_1(VAR_2, VAR_0, VAR_1);
}
