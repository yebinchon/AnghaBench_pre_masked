
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_erom_iores {int mapped_rid; int * mapped; int owner; } ;
struct bhnd_erom_io {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int *) ;
 int FUNC_1 (struct bhnd_erom_io*,int ) ;

__attribute__((used)) static void
FUNC_2(struct bhnd_erom_io *VAR_2)
{
 struct bhnd_erom_iores *VAR_3 = (struct bhnd_erom_iores *)VAR_2;


 if (VAR_3->mapped) {
  FUNC_0(VAR_3->owner, VAR_1,
      VAR_3->mapped_rid, VAR_3->mapped);
  VAR_3->mapped = ((void*)0);
  VAR_3->mapped_rid = -1;
 }

 FUNC_1(VAR_2, VAR_0);
}
