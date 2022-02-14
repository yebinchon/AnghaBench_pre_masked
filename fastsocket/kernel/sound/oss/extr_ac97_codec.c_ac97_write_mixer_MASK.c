
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct ac97_mixer_hw {unsigned int scale; int offset; } ;
struct ac97_codec {int bit_resolution; int (* codec_read ) (struct ac97_codec*,int ) ;int (* codec_write ) (struct ac97_codec*,int ,unsigned int) ;scalar_t__ id; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct ac97_mixer_hw* VAR_11 ;
 int FUNC_0 (char*,unsigned int,...) ;
 int FUNC_1 (struct ac97_codec*,int ) ;
 int FUNC_2 (struct ac97_codec*,int ) ;
 int FUNC_3 (struct ac97_codec*,int ) ;
 int FUNC_4 (struct ac97_codec*,int ,unsigned int) ;
 unsigned int FUNC_5 (struct ac97_codec*,int ) ;

__attribute__((used)) static void FUNC_6(struct ac97_codec *VAR_12, int VAR_13,
        unsigned int VAR_14, unsigned int VAR_15)
{
 u16 VAR_16 = 0;
 int VAR_17;
 struct ac97_mixer_hw *VAR_18 = &VAR_11[VAR_13];
 if (VAR_1 & (1 << VAR_13)) {

  if (VAR_14 == 0 && VAR_15 == 0) {
   VAR_16 = VAR_0;
  } else {
   if (VAR_13 == VAR_4) {
    VAR_15 = (VAR_15 * VAR_18->scale) / 100;
    VAR_14 = (VAR_14 * VAR_18->scale) / 100;
    if (VAR_15 >= VAR_18->scale)
     VAR_15 = VAR_18->scale-1;
    if (VAR_14 >= VAR_18->scale)
     VAR_14 = VAR_18->scale-1;
   } else {

    if (VAR_13 == VAR_10 ||
        VAR_13 == VAR_2)
     VAR_17 = (1 << VAR_12->bit_resolution);
    else
     VAR_17 = VAR_18->scale;

    VAR_15 = ((100 - VAR_15) * VAR_17) / 100;
    VAR_14 = ((100 - VAR_14) * VAR_17) / 100;
    if (VAR_15 >= VAR_17)
     VAR_15 = VAR_17-1;
    if (VAR_14 >= VAR_17)
     VAR_14 = VAR_17-1;
   }
   VAR_16 = (VAR_14 << 8) | VAR_15;
  }
 } else if (VAR_13 == VAR_3) {
  VAR_16 = VAR_12->codec_read(VAR_12 , VAR_18->offset) & ~0x0f00;
  VAR_14 = ((100 - VAR_14) * VAR_18->scale) / 100;
  if (VAR_14 >= VAR_18->scale)
   VAR_14 = VAR_18->scale-1;
  VAR_16 |= (VAR_14 << 8) & 0x0e00;
 } else if (VAR_13 == VAR_9) {
  VAR_16 = VAR_12->codec_read(VAR_12 , VAR_18->offset) & ~0x000f;
  VAR_14 = ((100 - VAR_14) * VAR_18->scale) / 100;
  if (VAR_14 >= VAR_18->scale)
   VAR_14 = VAR_18->scale-1;
  VAR_16 |= VAR_14 & 0x000e;
 } else if(VAR_14 == 0) {
  VAR_16 = VAR_0;
 } else if (VAR_13 == VAR_8) {
  VAR_14 = ((100 - VAR_14) * VAR_18->scale) / 100;
  if (VAR_14 >= VAR_18->scale)
   VAR_14 = VAR_18->scale-1;
  VAR_16 = VAR_14 << 1;
 } else if (VAR_13 == VAR_6) {
  VAR_14 = ((100 - VAR_14) * VAR_18->scale) / 100;
  if (VAR_14 >= VAR_18->scale)
   VAR_14 = VAR_18->scale-1;
  VAR_16 = VAR_14;
 } else if (VAR_13 == VAR_7) {
  VAR_17 = (1 << VAR_12->bit_resolution);
  VAR_14 = ((100 - VAR_14) * VAR_17) / 100;
  if (VAR_14 >= VAR_18->scale)
   VAR_14 = VAR_18->scale-1;
  VAR_16 = VAR_14;
 } else if (VAR_13 == VAR_5) {
  VAR_16 = VAR_12->codec_read(VAR_12 , VAR_18->offset) & ~0x801f;
  VAR_14 = ((100 - VAR_14) * VAR_18->scale) / 100;
  if (VAR_14 >= VAR_18->scale)
   VAR_14 = VAR_18->scale-1;
  VAR_16 |= VAR_14;


 }




 VAR_12->codec_write(VAR_12, VAR_18->offset, VAR_16);





}
