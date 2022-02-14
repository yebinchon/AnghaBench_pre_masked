
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sc_pcminfo {int dev; struct sc_info* sc; struct hdspe_channel* hc; } ;
struct sc_info {int type; int dev; int lock; } ;
struct hdspe_channel {int * descr; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int FUNC_0 (int ) ;
 struct hdspe_channel* VAR_7 ;
 struct hdspe_channel* VAR_8 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 struct sc_info* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,struct sc_pcminfo*) ;
 int FUNC_6 (struct sc_info*) ;
 scalar_t__ FUNC_7 (struct sc_info*) ;
 int FUNC_8 (struct sc_info*) ;
 struct sc_pcminfo* FUNC_9 (int,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_9)
{
 struct hdspe_channel *VAR_10;
 struct sc_pcminfo *VAR_11;
 struct sc_info *VAR_12;
 uint32_t VAR_13;
 int VAR_14, VAR_15;





 VAR_12 = FUNC_3(VAR_9);
 VAR_12->lock = FUNC_12(FUNC_2(VAR_9),
     "snd_hdspe softc");
 VAR_12->dev = VAR_9;

 FUNC_10(VAR_9);
 VAR_13 = FUNC_11(VAR_9);
 switch (VAR_13) {
 case 129:
  VAR_12->type = VAR_0;
  VAR_10 = VAR_7;
  break;
 case 128:
  VAR_12->type = VAR_6;
  VAR_10 = VAR_8;
  break;
 default:
  return (VAR_1);
 }


 VAR_15 = FUNC_6(VAR_12);
 if (VAR_15) {
  FUNC_4(VAR_9, "Unable to allocate system resources.\n");
  return (VAR_1);
 }

 if (FUNC_7(VAR_12) != 0)
  return (VAR_1);

 for (VAR_14 = 0; VAR_14 < VAR_2 && VAR_10[VAR_14].descr != ((void*)0); VAR_14++) {
  VAR_11 = FUNC_9(sizeof(struct sc_pcminfo), VAR_3, VAR_4 | VAR_5);
  VAR_11->hc = &VAR_10[VAR_14];
  VAR_11->sc = VAR_12;
  VAR_11->dev = FUNC_1(VAR_9, "pcm", -1);
  FUNC_5(VAR_11->dev, VAR_11);
 }

 FUNC_8(VAR_12);

 return (FUNC_0(VAR_9));
}
