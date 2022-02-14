
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brandnote_cb_arg {int osrel; TYPE_1__* brandnote; } ;
typedef int boolean_t ;
struct TYPE_2__ {int flags; int (* trans_osrel ) (int const*,int ) ;} ;
typedef int Elf_Note ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int ) ;

__attribute__((used)) static boolean_t
FUNC_1(const Elf_Note *VAR_2, void *VAR_3, boolean_t *VAR_4)
{
 struct brandnote_cb_arg *VAR_5;

 VAR_5 = VAR_3;





 *VAR_4 = (VAR_5->brandnote->flags & VAR_0) != 0 &&
     VAR_5->brandnote->trans_osrel != ((void*)0) ?
     VAR_5->brandnote->trans_osrel(VAR_2, VAR_5->osrel) : VAR_1;

 return (VAR_1);
}
