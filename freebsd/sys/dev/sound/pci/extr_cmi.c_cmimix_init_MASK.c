
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct snd_mixer {int dummy; } ;
struct sc_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ rec; scalar_t__ bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct sc_info*,int ,int) ;
 TYPE_1__* VAR_8 ;
 struct sc_info* FUNC_1 (struct snd_mixer*) ;
 int FUNC_2 (struct snd_mixer*,size_t) ;
 int FUNC_3 (struct snd_mixer*,size_t) ;

__attribute__((used)) static int
FUNC_4(struct snd_mixer *VAR_9)
{
 struct sc_info *VAR_10 = FUNC_1(VAR_9);
 u_int32_t VAR_11,VAR_12;

 for(VAR_11 = VAR_12 = 0; VAR_11 < VAR_7; VAR_11++) {
  if (VAR_8[VAR_11].bits) VAR_12 |= 1 << VAR_11;
 }
 FUNC_2(VAR_9, VAR_12);

 for(VAR_11 = VAR_12 = 0; VAR_11 < VAR_7; VAR_11++) {
  if (VAR_8[VAR_11].rec) VAR_12 |= 1 << VAR_11;
 }
 FUNC_3(VAR_9, VAR_12);

 FUNC_0(VAR_10, VAR_3, 0);
 FUNC_0(VAR_10, VAR_0, 0);
 FUNC_0(VAR_10, VAR_1, 0);
 FUNC_0(VAR_10, VAR_2,
    VAR_4 | VAR_6 | VAR_5);
 return 0;
}
