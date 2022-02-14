
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bhndb_pci_probe {scalar_t__ m_target; TYPE_1__* m_win; int * m_res; int m_valid; } ;
typedef scalar_t__ bhnd_size_t ;
typedef scalar_t__ bhnd_addr_t ;
struct TYPE_2__ {scalar_t__ win_type; scalar_t__ win_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static bool
FUNC_1(struct bhndb_pci_probe *VAR_1, bhnd_addr_t VAR_2,
    bhnd_size_t VAR_3)
{
 if (!VAR_1->m_valid)
  return (0);

 FUNC_0(VAR_1->m_win != ((void*)0), ("missing register window"));
 FUNC_0(VAR_1->m_res != ((void*)0), ("missing regwin resource"));
 FUNC_0(VAR_1->m_win->win_type == VAR_0,
     ("unexpected window type %d", VAR_1->m_win->win_type));

 if (VAR_2 < VAR_1->m_target)
  return (0);

 if (VAR_2 >= VAR_1->m_target + VAR_1->m_win->win_size)
  return (0);

 if ((VAR_1->m_target + VAR_1->m_win->win_size) - VAR_2 < VAR_3)
  return (0);

 return (1);
}
