
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bhnd_core_desc {char const* desc; } ;


 struct bhnd_core_desc* FUNC_0 (int ,int ) ;

const char *
FUNC_1(uint16_t VAR_0, uint16_t VAR_1)
{
 const struct bhnd_core_desc *VAR_2;

 if ((VAR_2 = FUNC_0(VAR_0, VAR_1)) == ((void*)0))
  return ("unknown");

 return VAR_2->desc;
}
