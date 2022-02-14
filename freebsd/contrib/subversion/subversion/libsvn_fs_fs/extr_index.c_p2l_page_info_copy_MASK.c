
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int offset; size_t page_no; int page_size; int page_count; scalar_t__ page_start; int first_revision; scalar_t__ next_offset; scalar_t__ start_offset; } ;
typedef TYPE_1__ p2l_page_info_baton_t ;
struct TYPE_6__ {int page_size; int page_count; int first_revision; } ;
typedef TYPE_2__ p2l_header_t ;
typedef size_t apr_size_t ;
typedef scalar_t__ apr_off_t ;



__attribute__((used)) static void
FUNC_0(p2l_page_info_baton_t *VAR_0,
                   const p2l_header_t *VAR_1,
                   const apr_off_t *VAR_2)
{



  if (VAR_0->offset / VAR_1->page_size < VAR_1->page_count)
    {

      VAR_0->page_no = (apr_size_t)(VAR_0->offset / VAR_1->page_size);
      VAR_0->start_offset = VAR_2[VAR_0->page_no];
      VAR_0->next_offset = VAR_2[VAR_0->page_no + 1];
      VAR_0->page_size = VAR_1->page_size;
    }
  else
    {

      VAR_0->page_no = VAR_1->page_count;
      VAR_0->start_offset = VAR_2[VAR_0->page_no];
      VAR_0->next_offset = VAR_2[VAR_0->page_no];
      VAR_0->page_size = 0;
    }

  VAR_0->first_revision = VAR_1->first_revision;
  VAR_0->page_start = (apr_off_t)(VAR_1->page_size * VAR_0->page_no);
  VAR_0->page_count = VAR_1->page_count;
}
