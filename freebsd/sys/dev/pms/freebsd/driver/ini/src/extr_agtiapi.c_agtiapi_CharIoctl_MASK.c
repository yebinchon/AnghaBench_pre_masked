
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_10__ {void* Status; int MajorFunction; scalar_t__ FunctionSpecificArea; int Length; } ;
typedef TYPE_1__ tiIOCTLPayload_t ;
struct TYPE_11__ {int deviceLength; int realDeviceCount; } ;
typedef TYPE_2__ tdDeviceListPayload_t ;
typedef int tdDeviceInfoIOCTL_t ;
struct thread {int dummy; } ;
struct sema {int dummy; } ;
struct cdev {struct agtiapi_softc* si_drv1; } ;
struct agtiapi_softc {int flags; int cardNo; struct sema* pIoctlSem; int tiRoot; int down_count; int up_count; } ;
struct TYPE_12__ {int datasize; int data; } ;
typedef TYPE_3__ datatosend ;
typedef scalar_t__ caddr_t ;
typedef int U32 ;



 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct agtiapi_softc*,unsigned long*) ;
 int FUNC_2 (struct agtiapi_softc*,int ,scalar_t__) ;
 int FUNC_3 (struct agtiapi_softc*,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int *,int *,int *,int *) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (struct sema*,int ,char*) ;
 int FUNC_11 (scalar_t__,char*) ;
 int FUNC_12 (int *,TYPE_1__*,struct agtiapi_softc*,int *,int *) ;

__attribute__((used)) static int FUNC_13( struct cdev *VAR_17,
                              u_long VAR_18,
                              caddr_t VAR_19,
                              int VAR_20,
                              struct thread *VAR_21 )
{
  struct sema VAR_22;
  datatosend *VAR_23;
  tiIOCTLPayload_t *VAR_24;
  struct agtiapi_softc *VAR_25;
  VAR_25=VAR_17->si_drv1;
  U32 VAR_26 = 0;
  U32 VAR_27;
  int VAR_28 = 0;
  int VAR_29 = 0;
  tdDeviceListPayload_t *VAR_30 = ((void*)0);
  unsigned long VAR_31;

  switch (VAR_18)
  {
  case 128:
    VAR_23=(datatosend*)VAR_19;
    VAR_24 = FUNC_7(VAR_23->datasize,VAR_16,VAR_15);
    FUNC_0( "agtiapi_CharIoctl: old load->datasize = %d\n", VAR_23->datasize );

    VAR_28 = FUNC_4(VAR_23->data,VAR_24,VAR_23->datasize);
    if (VAR_28)
    {
      VAR_26 = VAR_4;
      return VAR_26;
    }
    FUNC_10(&VAR_22,0,"sem");
    VAR_25->pIoctlSem =&VAR_22;
    VAR_25->up_count = VAR_25->down_count = 0;
    if ( VAR_24->MajorFunction == VAR_13 )
    {
      VAR_27 = FUNC_3(VAR_25, VAR_24);
      if (VAR_27 == 0)
      {
        VAR_24->Status = VAR_6;
        VAR_26 = VAR_6;
      }
      else
      {
        VAR_24->Status = VAR_4;
        VAR_26 = VAR_4;
      }

      VAR_30 = (tdDeviceListPayload_t*)VAR_24->FunctionSpecificArea;
      VAR_23->datasize =VAR_23->datasize - sizeof(tdDeviceInfoIOCTL_t) * (VAR_30->deviceLength - VAR_30->realDeviceCount);
      FUNC_0( "agtiapi_CharIoctl: new load->datasize = %d\n", VAR_23->datasize );

    }
    else if (VAR_24->MajorFunction == VAR_14)
    {
      VAR_27 = FUNC_2( VAR_25,
                                      VAR_24->Length,
                                      (VAR_24->FunctionSpecificArea) );
      if (VAR_27 == 0)
      {
        VAR_24->Status = VAR_6;
        VAR_26 = VAR_6;
      }
      else
      {
        VAR_24->Status = VAR_4;
        VAR_26 = VAR_4;
      }
    }
    else if ( VAR_24->MajorFunction == VAR_7 )
    {
      if ( VAR_25->flags & VAR_0 )
      {
        FUNC_11 ( VAR_24->FunctionSpecificArea, "DPMC LEAN\n" );
      }
      else
      {
        FUNC_11 ( VAR_24->FunctionSpecificArea, "do not dpmc lean\n" );
      }
      VAR_24->Status = VAR_6;
      VAR_26 = VAR_6;
    }
    else if (VAR_24->MajorFunction == VAR_8 )
    {
      FUNC_0("agtiapi_CharIoctl: IOCTL_MJ_CHECK_FATAL_ERROR call received for card %d\n", VAR_25->cardNo);

      if(VAR_25->flags & VAR_0)
      {
        FUNC_9("agtiapi_CharIoctl: Port Panic Status For Card %d is True\n",VAR_25->cardNo);
        VAR_24->Status = VAR_12;
      }
      else
      {
        FUNC_0("agtiapi_CharIoctl: Port Panic Status For Card %d is False\n",VAR_25->cardNo);
        VAR_24->Status = VAR_11;
      }
      VAR_26 = VAR_6;
    }
    else if (VAR_24->MajorFunction == VAR_9)
    {
      FUNC_0("agtiapi_CharIoctl: IOCTL_MJ_FATAL_ERROR_DUMP_COMPLETE call received for card %d\n", VAR_25->cardNo);

      VAR_25->flags |= VAR_1;

      VAR_27 = FUNC_1 (VAR_25, &VAR_31);

      if(VAR_27 == VAR_2)
      {

        VAR_25->flags &= ~VAR_0;
        VAR_24->Status = VAR_10;
        VAR_26 = VAR_6;
      }
      else
      {
        VAR_24->Status = VAR_4;
        VAR_26 = VAR_4;
      }
    }
    else
    {
      VAR_26 = FUNC_12( &VAR_25->tiRoot,
                               VAR_24,
                               VAR_25,
                               ((void*)0),
                               ((void*)0) );
      if (VAR_26 == VAR_5)
      {
        FUNC_8(&VAR_25->tiRoot,((void*)0), ((void*)0), ((void*)0));
        VAR_26 = VAR_6;
      }
    }
    VAR_25->pIoctlSem = ((void*)0);
    VAR_28 = 0;


    VAR_28=FUNC_5(VAR_24,VAR_23->data,VAR_23->datasize);
    if (VAR_28)
    {
      VAR_26 = VAR_4;
      return VAR_26;
    }
    FUNC_6(VAR_24,VAR_16);
    VAR_24=((void*)0);
    break;
  default:
    VAR_29 = VAR_3;
    break;
  }
  return(VAR_26);
}
