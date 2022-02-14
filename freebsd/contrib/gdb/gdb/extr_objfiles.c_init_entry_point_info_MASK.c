
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* main_func_highpc; void* main_func_lowpc; void* entry_func_highpc; void* entry_func_lowpc; void* deprecated_entry_file_highpc; void* deprecated_entry_file_lowpc; int entry_point; } ;
struct objfile {TYPE_1__ ei; int obfd; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (struct objfile *VAR_4)
{



  if (FUNC_0 (VAR_4->obfd) & VAR_0)
    {


      VAR_4->ei.entry_point = FUNC_1 (VAR_4->obfd);
    }
  else
    {

      VAR_4->ei.entry_point = VAR_3;
    }
  VAR_4->ei.deprecated_entry_file_lowpc = VAR_2;
  VAR_4->ei.deprecated_entry_file_highpc = VAR_1;
  VAR_4->ei.entry_func_lowpc = VAR_2;
  VAR_4->ei.entry_func_highpc = VAR_1;
  VAR_4->ei.main_func_lowpc = VAR_2;
  VAR_4->ei.main_func_highpc = VAR_1;
}
