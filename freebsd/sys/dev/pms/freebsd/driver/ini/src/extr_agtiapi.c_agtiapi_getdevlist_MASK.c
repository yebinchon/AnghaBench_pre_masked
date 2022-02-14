
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {void* Status; scalar_t__ FunctionSpecificArea; } ;
typedef TYPE_3__ tiIOCTLPayload_t ;
struct TYPE_16__ {int devType_S_Rate; int sasAddressLo; int sasAddressHi; } ;
struct TYPE_18__ {int sasAddressHi; int sasAddressLo; int deviceType; int linkRate; int phyId; int phyID; unsigned long DeviceHandle; int target_ssp_stp_smp; int ishost; TYPE_2__ agDeviceInfo; struct TYPE_18__* tdData; } ;
typedef TYPE_4__ tiDeviceHandle_t ;
typedef TYPE_4__ tdsaDeviceData_t ;
struct TYPE_19__ {int deviceLength; int realDeviceCount; int * pDeviceInfo; } ;
typedef TYPE_6__ tdDeviceListPayload_t ;
typedef TYPE_4__ tdDeviceInfoIOCTL_t ;
struct agtiapi_softc {int devDiscover; int portCount; int tiRoot; TYPE_8__* pPortalData; } ;
typedef int bit8 ;
typedef int bit32 ;
struct TYPE_15__ {int tiPortalContext; } ;
struct TYPE_20__ {TYPE_1__ portalInfo; } ;
typedef TYPE_8__ ag_portal_data_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 void* FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__* VAR_8 ;
 int FUNC_3 (TYPE_4__**,int ) ;
 TYPE_4__** FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (TYPE_4__**,int ,int) ;
 int FUNC_7 (int *,int *,TYPE_4__**,int) ;
 int FUNC_8 (int *,int,int **,int **) ;

int FUNC_9( struct agtiapi_softc *VAR_9,
                        tiIOCTLPayload_t *VAR_10 )
{
  tdDeviceListPayload_t *VAR_11 =
    (tdDeviceListPayload_t *) VAR_10->FunctionSpecificArea;
  tdDeviceInfoIOCTL_t *VAR_12 = ((void*)0);
  bit8 *VAR_13;
  tdsaDeviceData_t *VAR_14 = ((void*)0);
  tiDeviceHandle_t **VAR_15 = ((void*)0);
  tiDeviceHandle_t **VAR_16 = ((void*)0);
  tiDeviceHandle_t *VAR_17 = ((void*)0);
  bit32 VAR_18, VAR_19;
  bit32 VAR_20, VAR_21;
  bit32 VAR_22;
  bit32 VAR_23=VAR_2;
  ag_portal_data_t *VAR_24;
  bit8 *VAR_25 = ((void*)0);
  FUNC_0( "agtiapi_getdevlist: Enter\n" );

  VAR_13 = VAR_11 -> pDeviceInfo;
  VAR_22 = VAR_9->devDiscover;
  if (VAR_22 > VAR_11->deviceLength )
  {
    FUNC_0( "agtiapi_getdevlist: MaxDeviceCount: %d > Requested device length: %d\n", VAR_22, VAR_11->deviceLength );
    VAR_22 = VAR_11->deviceLength;
    VAR_23 = VAR_1;
  }
  FUNC_0( "agtiapi_getdevlist: MaxDeviceCount: %d > Requested device length: %d\n", VAR_22, VAR_11->deviceLength );
  VAR_19 = FUNC_1( VAR_22 * sizeof(tiDeviceHandle_t *),
                             sizeof(void *) );
  FUNC_0("agtiapi_getdevlist: portCount %d\n", VAR_9->portCount);
  VAR_15 = FUNC_4(VAR_19, VAR_7, VAR_6);
  if (VAR_15 == ((void*)0))
  {
    FUNC_0("agtiapi_getdevlist: failed to allocate memory\n");
    VAR_23 = VAR_1;
    VAR_10->Status = VAR_4;
    return VAR_23;
  }
  FUNC_6(VAR_15, 0, VAR_19);
  VAR_24 = &VAR_9->pPortalData[0];
  VAR_25 = (bit8*)VAR_15;
  for (VAR_21 = VAR_18 = 0; VAR_18 < VAR_9->portCount; VAR_18++, VAR_24++)
  {
    VAR_20 = FUNC_7(&VAR_9->tiRoot,
                    &VAR_24->portalInfo.tiPortalContext,
      ( tiDeviceHandle_t **)VAR_25 ,VAR_22 );
    if (VAR_20 == VAR_0)
    {
      FUNC_0( "agtiapi_getdevlist: DISCOVERY_IN_PROGRESS on "
                      "portal %d\n", VAR_18 );
      FUNC_3(VAR_15, VAR_7);
      VAR_23 = VAR_1;
      VAR_10->Status = VAR_4;
      return VAR_23;
    }
    VAR_21 += VAR_20;
    VAR_25+= VAR_20*sizeof(tiDeviceHandle_t *);
    VAR_22-= VAR_20;
  }
  if (VAR_21 > VAR_11->deviceLength)
  {
    VAR_21 = VAR_11->deviceLength;
  }

  VAR_20 = 0;

  VAR_16 = VAR_15;
  for (VAR_18 = 0; VAR_18 < VAR_9->devDiscover; VAR_18++)
  {
     VAR_17 = (tiDeviceHandle_t*)VAR_16[VAR_18];
    if (VAR_15[VAR_18] != VAR_8)
    {
      VAR_14 = VAR_15 [VAR_18]->tdData;

 VAR_12 = (tdDeviceInfoIOCTL_t*)(VAR_13 + sizeof(tdDeviceInfoIOCTL_t) * VAR_20);
      if (VAR_14 != VAR_8 && VAR_12 != VAR_8)
      {
        FUNC_5( &VAR_12->sasAddressHi,
                     VAR_14->agDeviceInfo.sasAddressHi,
                     sizeof(bit32) );
        FUNC_5( &VAR_12->sasAddressLo,
                     VAR_14->agDeviceInfo.sasAddressLo,
                     sizeof(bit32) );







        VAR_12->deviceType =
          ( VAR_14->agDeviceInfo.devType_S_Rate & 0x30 ) >> 4;
        VAR_12->linkRate =
          VAR_14->agDeviceInfo.devType_S_Rate & 0x0F;
        VAR_12->phyId = VAR_14->phyID;
  VAR_12->ishost = VAR_14->target_ssp_stp_smp;
 VAR_12->DeviceHandle= (unsigned long)VAR_17;
 if(VAR_12->deviceType == 0x02)
 {
    bit8 *VAR_26;
    bit8 *VAR_27;
    FUNC_8(&VAR_9->tiRoot, VAR_14->phyID, &VAR_26, &VAR_27);
    VAR_12->sasAddressHi = FUNC_2(*(bit32*)VAR_26);
    VAR_12->sasAddressLo = FUNC_2(*(bit32*)VAR_27) + VAR_14->phyID + 16;
 }
 else
 {
        VAR_12->sasAddressHi =
          FUNC_2( VAR_12->sasAddressHi );
        VAR_12->sasAddressLo =
          FUNC_2( VAR_12->sasAddressLo );
  }

        FUNC_0( "agtiapi_getdevlist: devicetype %x\n",
                        VAR_12->deviceType );
        FUNC_0( "agtiapi_getdevlist: linkrate %x\n",
                        VAR_12->linkRate );
        FUNC_0( "agtiapi_getdevlist: phyID %x\n",
                        VAR_12->phyId );
        FUNC_0( "agtiapi_getdevlist: addresshi %x\n",
                        VAR_12->sasAddressHi );
        FUNC_0( "agtiapi_getdevlist: addresslo %x\n",
                        VAR_12->sasAddressHi );
      }
      else
      {
        FUNC_0( "agtiapi_getdevlist: pDeviceData %p or pDeviceInfo "
                        "%p is NULL %d\n", VAR_14, VAR_12, VAR_18 );
      }
      VAR_20++;
    }
  }
  VAR_11->realDeviceCount = VAR_20;
  FUNC_0( "agtiapi_getdevlist: Exit RealDeviceCount = %d\n", VAR_20 );
  if (VAR_15)
  {
    FUNC_3(VAR_15, VAR_7);
  }
  if(VAR_23 != VAR_1)
  {
    VAR_23 = VAR_3;
  }
  VAR_10->Status = VAR_5;
  return VAR_23;
}
