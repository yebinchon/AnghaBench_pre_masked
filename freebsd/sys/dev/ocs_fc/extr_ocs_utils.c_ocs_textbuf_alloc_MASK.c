
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ max_allocation_length; int extendable; scalar_t__ allocation_length; int segment_list; int * ocs; } ;
typedef TYPE_1__ ocs_textbuf_t ;
typedef int ocs_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int * FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;

int32_t
FUNC_3(ocs_t *VAR_4, ocs_textbuf_t *VAR_5, uint32_t VAR_6)
{
 FUNC_1(VAR_5, 0, sizeof(*VAR_5));

 VAR_5->ocs = VAR_4;
 FUNC_0(&VAR_5->segment_list, VAR_3, VAR_2);

 if (VAR_6 > VAR_0) {
  VAR_5->allocation_length = VAR_0;
 } else {
  VAR_5->allocation_length = VAR_6;
 }


 VAR_5->extendable = VAR_1;


 VAR_5->max_allocation_length = VAR_6;


 return (FUNC_2(VAR_5) == ((void*)0)) ? -1 : 0;
}
