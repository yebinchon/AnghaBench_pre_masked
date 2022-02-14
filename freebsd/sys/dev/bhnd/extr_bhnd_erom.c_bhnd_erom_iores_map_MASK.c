
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bhnd_erom_iores {int mapped_rid; int owner_rid; TYPE_1__* mapped; int owner; } ;
struct bhnd_erom_io {int dummy; } ;
typedef scalar_t__ bhnd_size_t ;
typedef scalar_t__ bhnd_addr_t ;
struct TYPE_3__ {int res; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (int ,int ,int*,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (int ,int ,int,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct bhnd_erom_io *VAR_6, bhnd_addr_t VAR_7,
    bhnd_size_t VAR_8)
{
 struct bhnd_erom_iores *VAR_9;

 VAR_9 = (struct bhnd_erom_iores *)VAR_6;


 if (VAR_8 == 0)
  return (VAR_1);

 if (VAR_0 - VAR_8 < VAR_7)
  return (VAR_1);


 if (VAR_9->mapped) {

  if (FUNC_3(VAR_9->mapped->res) == VAR_7 &&
      FUNC_2(VAR_9->mapped->res) == VAR_8)
  {
   return (0);
  }


  FUNC_1(VAR_9->owner, VAR_5,
      VAR_9->mapped_rid, VAR_9->mapped);
  VAR_9->mapped = ((void*)0);
  VAR_9->mapped_rid = -1;
 }


 VAR_9->mapped_rid = VAR_9->owner_rid;
 VAR_9->mapped = FUNC_0(VAR_9->owner, VAR_5,
     &VAR_9->mapped_rid, VAR_7, VAR_7+VAR_8-1, VAR_8,
     VAR_3|VAR_4);
 if (VAR_9->mapped == ((void*)0)) {
  VAR_9->mapped_rid = -1;
  return (VAR_2);
 }

 return (0);
}
