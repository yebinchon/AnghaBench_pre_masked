
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ entry_point; scalar_t__ deprecated_entry_file_highpc; scalar_t__ deprecated_entry_file_lowpc; } ;
struct TYPE_4__ {TYPE_1__ ei; } ;
typedef scalar_t__ CORE_ADDR ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int * FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_4, CORE_ADDR VAR_5, unsigned int VAR_6)
{
  if (VAR_3 != ((void*)0))
    FUNC_2 (VAR_3);
  VAR_3 = FUNC_0 (VAR_4, FUNC_1 (VAR_4));
  VAR_2 = VAR_5;
  VAR_1 = VAR_5 + VAR_6;

  if (VAR_0->ei.entry_point >= VAR_2 &&
      VAR_0->ei.entry_point < VAR_1)
    {
      VAR_0->ei.deprecated_entry_file_lowpc = VAR_2;
      VAR_0->ei.deprecated_entry_file_highpc = VAR_1;
    }
}
