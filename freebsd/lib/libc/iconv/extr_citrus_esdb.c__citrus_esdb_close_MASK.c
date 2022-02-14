
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _citrus_esdb {int db_num_charsets; TYPE_1__* db_variable; scalar_t__ db_len_variable; TYPE_1__* db_encname; TYPE_1__* db_charsets; } ;
struct TYPE_2__ {struct TYPE_2__* ec_csname; } ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(struct _citrus_esdb *VAR_0)
{

 for (int VAR_1 = 0; VAR_1 < VAR_0->db_num_charsets; VAR_1++)
  FUNC_0(VAR_0->db_charsets[VAR_1].ec_csname);
 VAR_0->db_num_charsets = 0;
 FUNC_0(VAR_0->db_charsets); VAR_0->db_charsets = ((void*)0);
 FUNC_0(VAR_0->db_encname); VAR_0->db_encname = ((void*)0);
 VAR_0->db_len_variable = 0;
 FUNC_0(VAR_0->db_variable); VAR_0->db_variable = ((void*)0);
}
