
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ac97_mixer_hw {int scale; int offset; } ;
struct ac97_codec {int (* codec_read ) (struct ac97_codec*,int ) ;int bit_resolution; scalar_t__ id; } ;


 int VAR_0 ;
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
 int FUNC_0 (char*,int,char*,int ,int,int) ;
 int FUNC_1 (struct ac97_codec*,int ) ;

__attribute__((used)) static int FUNC_2(struct ac97_codec *VAR_12, int VAR_13)
{
 u16 VAR_14;
 int VAR_15 = 0;
 int VAR_16;
 struct ac97_mixer_hw *VAR_17 = &VAR_11[VAR_13];

 VAR_14 = VAR_12->codec_read(VAR_12 , VAR_17->offset);

 if (VAR_14 & VAR_0) {
  VAR_15 = 0;
 } else if (VAR_1 & (1 << VAR_13)) {

  int VAR_18,VAR_19;

  VAR_18 = (VAR_14 >> 8) & 0x7f;
  VAR_19 = VAR_14 & 0x7f;

  if (VAR_13 == VAR_4) {
   VAR_19 = (VAR_19 * 100) / VAR_17->scale;
   VAR_18 = (VAR_18 * 100) / VAR_17->scale;
  } else {

   if(VAR_13 == VAR_10 || VAR_13 == VAR_2)
    VAR_16 = (1 << VAR_12->bit_resolution);
   else
    VAR_16 = VAR_17->scale;

   VAR_19 = 100 - ((VAR_19 * 100) / VAR_16);
   VAR_18 = 100 - ((VAR_18 * 100) / VAR_16);
  }
  VAR_15 = VAR_18 | (VAR_19 << 8);
 } else if (VAR_13 == VAR_8) {
  VAR_15 = 100 - ((((VAR_14 & 0x1e)>>1) * 100) / VAR_17->scale);
 } else if (VAR_13 == VAR_6) {
  VAR_15 = 100 - (((VAR_14 & 0x1f) * 100) / VAR_17->scale);
 } else if (VAR_13 == VAR_7) {
  VAR_16 = (1 << VAR_12->bit_resolution);
  VAR_15 = 100 - (((VAR_14 & 0x1f) * 100) / VAR_16);
 } else if (VAR_13 == VAR_5) {
  VAR_15 = 100 - (((VAR_14 & 0x1f) * 100) / VAR_17->scale);


 } else if (VAR_13 == VAR_3) {
  VAR_15 = 100 - ((((VAR_14 >> 8) & 0xe) * 100) / VAR_17->scale);
 } else if (VAR_13 == VAR_9) {
  VAR_15 = 100 - (((VAR_14 & 0xe) * 100) / VAR_17->scale);
 }
 return VAR_15;
}
