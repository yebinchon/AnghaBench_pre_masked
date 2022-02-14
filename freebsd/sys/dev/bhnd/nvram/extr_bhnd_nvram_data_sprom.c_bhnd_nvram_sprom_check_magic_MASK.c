
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct bhnd_nvram_io {int dummy; } ;
struct TYPE_3__ {int flags; scalar_t__ magic_value; int magic_offset; } ;
typedef TYPE_1__ bhnd_sprom_layout ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bhnd_nvram_io*,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct bhnd_nvram_io *VAR_2,
    const bhnd_sprom_layout *VAR_3, uint16_t *VAR_4)
{
 int VAR_5;


 if (VAR_3->flags & VAR_1)
  return (0);


 VAR_5 = FUNC_0(VAR_2, VAR_3->magic_offset, VAR_4,
     sizeof(*VAR_4));
 if (VAR_5)
  return (VAR_5);

 *VAR_4 = FUNC_1(*VAR_4);


 if (*VAR_4 != VAR_3->magic_value)
  return (VAR_0);

 return (0);
}
