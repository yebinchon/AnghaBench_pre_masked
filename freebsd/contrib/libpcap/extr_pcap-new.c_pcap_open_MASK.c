
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct pcap_rmtauth {int dummy; } ;
struct TYPE_13__ {int nocapture_local; } ;
struct TYPE_14__ {int errbuf; TYPE_1__ opt; } ;
typedef TYPE_2__ pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (char*,char*) ;
 TYPE_2__* FUNC_3 (char*,char*) ;
 TYPE_2__* FUNC_4 (char const*,int,int,int,struct pcap_rmtauth*,char*) ;
 int FUNC_5 (char const*,int*,int *,int *,char*,char*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (char*,int ,char*,...) ;
 int FUNC_11 (int) ;
 int FUNC_12 (char*,char*,int ) ;
 int FUNC_13 (char const*) ;

pcap_t *FUNC_14(const char *VAR_9, int VAR_10, int VAR_11, int VAR_12, struct pcap_rmtauth *VAR_13, char *VAR_14)
{
 char VAR_15[VAR_0];
 int VAR_16;
 pcap_t *VAR_17;
 int VAR_18;

 if (FUNC_13(VAR_9) > VAR_0)
 {
  FUNC_10(VAR_14, VAR_1, "The source string is too long. Cannot handle it correctly.");
  return ((void*)0);
 }





 if (FUNC_5(VAR_9, &VAR_16, ((void*)0), ((void*)0), VAR_15, VAR_14) == -1)
  return ((void*)0);

 switch (VAR_16)
 {
 case 130:
  return FUNC_3(VAR_15, VAR_14);

 case 129:
  VAR_17 = FUNC_2(VAR_15, VAR_14);
  break;

 case 128:






  return FUNC_4(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);

 default:
  FUNC_12(VAR_14, "Source type not supported", VAR_1);
  return ((void*)0);
 }

 if (VAR_17 == ((void*)0))
  return (((void*)0));
 VAR_18 = FUNC_8(VAR_17, VAR_10);
 if (VAR_18 < 0)
  goto fail;
 if (VAR_11 & VAR_8)
 {
  VAR_18 = FUNC_7(VAR_17, 1);
  if (VAR_18 < 0)
   goto fail;
 }
 if (VAR_11 & VAR_6)
 {
  VAR_18 = FUNC_6(VAR_17, 1);
  if (VAR_18 < 0)
   goto fail;
 }
 VAR_18 = FUNC_9(VAR_17, VAR_12);
 if (VAR_18 < 0)
  goto fail;
 VAR_18 = FUNC_0(VAR_17);
 if (VAR_18 < 0)
  goto fail;
 return VAR_17;

fail:
 if (VAR_18 == VAR_2)
  FUNC_10(VAR_14, VAR_1, "%s: %s",
      VAR_15, VAR_17->errbuf);
 else if (VAR_18 == VAR_3 ||
     VAR_18 == VAR_4 ||
     VAR_18 == VAR_5)
  FUNC_10(VAR_14, VAR_1, "%s: %s (%s)",
      VAR_15, FUNC_11(VAR_18), VAR_17->errbuf);
 else
  FUNC_10(VAR_14, VAR_1, "%s: %s",
      VAR_15, FUNC_11(VAR_18));
 FUNC_1(VAR_17);
 return ((void*)0);
}
