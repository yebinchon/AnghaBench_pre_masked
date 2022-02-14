
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_codec_id {int id; unsigned int mask; } ;



__attribute__((used)) static const struct ac97_codec_id *FUNC_0(const struct ac97_codec_id *VAR_0,
           unsigned int VAR_1)
{
 const struct ac97_codec_id *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->id; VAR_2++)
  if (VAR_2->id == (VAR_1 & VAR_2->mask))
   return VAR_2;
 return ((void*)0);
}
