
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct bhndb_port_priority {scalar_t__ type; size_t port; size_t region; } ;
struct bhndb_hw_priority {size_t num_ports; struct bhndb_port_priority* ports; } ;
struct bhnd_core_info {int dummy; } ;
typedef scalar_t__ bhnd_port_type ;


 struct bhndb_hw_priority* FUNC_0 (struct bhndb_hw_priority const*,struct bhnd_core_info*) ;

const struct bhndb_port_priority *
FUNC_1(const struct bhndb_hw_priority *VAR_0,
    struct bhnd_core_info *VAR_1, bhnd_port_type VAR_2, u_int VAR_3,
    u_int VAR_4)
{
 const struct bhndb_hw_priority *VAR_5;

 if ((VAR_5 = FUNC_0(VAR_0, VAR_1)) == ((void*)0))
  return (((void*)0));

 for (u_int VAR_6 = 0; VAR_6 < VAR_5->num_ports; VAR_6++) {
  const struct bhndb_port_priority *VAR_7 = &VAR_5->ports[VAR_6];

  if (VAR_7->type != VAR_2)
   continue;

  if (VAR_7->port != VAR_3)
   continue;

  if (VAR_7->region != VAR_4)
   continue;

  return (VAR_7);
 }


 return (((void*)0));
}
