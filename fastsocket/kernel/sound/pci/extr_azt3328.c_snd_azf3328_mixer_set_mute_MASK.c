
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_azf3328 {unsigned int mixer_io; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int ,int) ;

__attribute__((used)) static bool
FUNC_1(const struct snd_azf3328 *VAR_1,
      unsigned VAR_2, bool VAR_3
)
{
 unsigned long VAR_4 = VAR_1->mixer_io + VAR_2 + 1;
 bool VAR_5;



 VAR_5 = FUNC_0(VAR_4, VAR_0, VAR_3);


 return (VAR_3) ? !VAR_5 : VAR_5;
}
