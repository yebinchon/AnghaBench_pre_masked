
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_io {int dummy; } ;
struct bhnd_nvram_bcmhdr {int size; int magic; } ;
typedef int hdr ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct bhnd_nvram_io*) ;
 int FUNC_1 (struct bhnd_nvram_io*,int,struct bhnd_nvram_bcmhdr*,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct bhnd_nvram_io *VAR_3)
{
 struct bhnd_nvram_bcmhdr VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_1(VAR_3, 0x0, &VAR_4, sizeof(VAR_4))))
  return (VAR_5);

 if (FUNC_2(VAR_4.magic) != VAR_0)
  return (VAR_2);

 if (FUNC_2(VAR_4.size) > FUNC_0(VAR_3))
  return (VAR_2);

 return (VAR_1);
}
