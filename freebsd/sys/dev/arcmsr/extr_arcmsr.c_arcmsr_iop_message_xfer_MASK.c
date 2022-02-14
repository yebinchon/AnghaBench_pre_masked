
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {char* data_ptr; int dxfer_len; int sense_data; int sense_len; } ;
struct TYPE_4__ {int flags; } ;
union ccb {TYPE_3__ csio; TYPE_1__ ccb_h; } ;
typedef scalar_t__ uint8_t ;
typedef int u_int8_t ;
typedef int u_int32_t ;
struct QBUFFER {int dummy; } ;
struct TYPE_5__ {int Length; void* ReturnCode; } ;
struct CMD_MESSAGE_FIELD {int* messagedatabuffer; TYPE_2__ cmdmessage; } ;
struct AdapterControlBlock {size_t rqbuf_firstindex; size_t rqbuf_lastindex; int* rqbuffer; int acb_flags; int wqbuf_lastindex; int wqbuf_firstindex; int* wqbuffer; int qbuffer_lock; } ;
typedef char int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;



 int VAR_5 ;



 void* VAR_6 ;
 void* VAR_7 ;


 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct AdapterControlBlock*,struct QBUFFER*) ;
 int FUNC_3 (struct AdapterControlBlock*) ;
 int FUNC_4 (struct AdapterControlBlock*) ;
 struct QBUFFER* FUNC_5 (struct AdapterControlBlock*) ;
 int FUNC_6 (struct AdapterControlBlock*) ;
 int FUNC_7 (struct AdapterControlBlock*) ;
 int FUNC_8 (int*,char*,int ) ;
 int FUNC_9 (int*,int ,int) ;
 scalar_t__* FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(struct AdapterControlBlock *VAR_11, union ccb *VAR_12)
{
 struct CMD_MESSAGE_FIELD *VAR_13;
 int VAR_14 = 0, VAR_15 = 0;
 char *VAR_16;
 uint8_t *VAR_17 = FUNC_10(&VAR_12->csio);
 u_int32_t VAR_18 = (u_int32_t ) VAR_17[5] << 24 |
    (u_int32_t ) VAR_17[6] << 16 |
    (u_int32_t ) VAR_17[7] << 8 |
    (u_int32_t ) VAR_17[8];

 if ((VAR_12->ccb_h.flags & VAR_9) == VAR_10) {
  VAR_16 = VAR_12->csio.data_ptr;
  VAR_15 = VAR_12->csio.dxfer_len;
 } else {
  VAR_14 = VAR_5;
  goto message_out;
 }
 if (VAR_15 > sizeof(struct CMD_MESSAGE_FIELD)) {
  VAR_14 = VAR_5;
  goto message_out;
 }
 VAR_13 = (struct CMD_MESSAGE_FIELD *) VAR_16;
 switch(VAR_18) {
 case 132: {
   u_int8_t *VAR_19;
   u_int8_t *VAR_20 = VAR_13->messagedatabuffer;
   int32_t VAR_21 = 0;

   FUNC_0(&VAR_11->qbuffer_lock);
   while ((VAR_11->rqbuf_firstindex != VAR_11->rqbuf_lastindex)
    && (VAR_21 < 1031)) {
    VAR_19 = &VAR_11->rqbuffer[VAR_11->rqbuf_firstindex];
    *VAR_20 = *VAR_19;
    VAR_11->rqbuf_firstindex++;
    VAR_11->rqbuf_firstindex %= VAR_4;
    VAR_20++;
    VAR_21++;
   }
   if (VAR_11->acb_flags & VAR_0) {
    struct QBUFFER *VAR_22;

    VAR_11->acb_flags &= ~VAR_0;
    VAR_22 = FUNC_5(VAR_11);
    if(FUNC_2(VAR_11, VAR_22) == 0)
     VAR_11->acb_flags |= VAR_0;
   }
   VAR_13->cmdmessage.Length = VAR_21;
   VAR_13->cmdmessage.ReturnCode = VAR_7;
   VAR_14 = VAR_8;
   FUNC_1(&VAR_11->qbuffer_lock);
  }
  break;
 case 128: {
   int32_t VAR_23, VAR_24, VAR_25, VAR_26;
   u_int8_t *VAR_27;
   u_int8_t *VAR_28 = VAR_13->messagedatabuffer;

   VAR_24 = VAR_13->cmdmessage.Length;
   FUNC_0(&VAR_11->qbuffer_lock);
   VAR_26 = VAR_11->wqbuf_lastindex;
   VAR_25 = VAR_11->wqbuf_firstindex;
   if (VAR_26 != VAR_25) {
    FUNC_3(VAR_11);

    if(VAR_12->csio.sense_len) {
    ((u_int8_t *)&VAR_12->csio.sense_data)[0] = (0x1 << 7 | 0x70);

    ((u_int8_t *)&VAR_12->csio.sense_data)[2] = 0x05;

    ((u_int8_t *)&VAR_12->csio.sense_data)[7] = 0x0A;

    ((u_int8_t *)&VAR_12->csio.sense_data)[12] = 0x20;

    }
    VAR_14 = VAR_5;
   } else {
    VAR_23 = (VAR_25-VAR_26 - 1)
      &(VAR_4 - 1);
    if (VAR_23 >= VAR_24) {
     while (VAR_24 > 0) {
      VAR_27 = &VAR_11->wqbuffer[VAR_11->wqbuf_lastindex];
      *VAR_27 = *VAR_28;
      VAR_11->wqbuf_lastindex++;
      VAR_11->wqbuf_lastindex %= VAR_4;
      VAR_28++;
      VAR_24--;
     }
     if (VAR_11->acb_flags & VAR_2) {
      VAR_11->acb_flags &=
          ~VAR_2;
      FUNC_3(VAR_11);
     }
    } else {

     if(VAR_12->csio.sense_len) {
     ((u_int8_t *)&VAR_12->csio.sense_data)[0] = (0x1 << 7 | 0x70);

     ((u_int8_t *)&VAR_12->csio.sense_data)[2] = 0x05;

     ((u_int8_t *)&VAR_12->csio.sense_data)[7] = 0x0A;

     ((u_int8_t *)&VAR_12->csio.sense_data)[12] = 0x20;

     }
     VAR_14 = VAR_5;
    }
   }
   FUNC_1(&VAR_11->qbuffer_lock);
  }
  break;
 case 135: {
   u_int8_t *VAR_29 = VAR_11->rqbuffer;

   FUNC_0(&VAR_11->qbuffer_lock);
   if (VAR_11->acb_flags & VAR_0) {
    VAR_11->acb_flags &= ~VAR_0;
    FUNC_6(VAR_11);
   }
   VAR_11->acb_flags |= VAR_1;
   VAR_11->rqbuf_firstindex = 0;
   VAR_11->rqbuf_lastindex = 0;
   FUNC_9(VAR_29, 0, VAR_4);
   VAR_13->cmdmessage.ReturnCode =
       VAR_7;
   FUNC_1(&VAR_11->qbuffer_lock);
  }
  break;
 case 134: {
   u_int8_t *VAR_30 = VAR_11->wqbuffer;

   FUNC_0(&VAR_11->qbuffer_lock);
   if (VAR_11->acb_flags & VAR_0) {
    VAR_11->acb_flags &= ~VAR_0;
    FUNC_6(VAR_11);
   }
   VAR_11->acb_flags |=
    (VAR_2 |
     VAR_3);
   VAR_11->wqbuf_firstindex = 0;
   VAR_11->wqbuf_lastindex = 0;
   FUNC_9(VAR_30, 0, VAR_4);
   VAR_13->cmdmessage.ReturnCode =
    VAR_7;
   FUNC_1(&VAR_11->qbuffer_lock);
  }
  break;
 case 136: {
   u_int8_t *VAR_31;

   FUNC_0(&VAR_11->qbuffer_lock);
   if (VAR_11->acb_flags & VAR_0) {
    VAR_11->acb_flags &= ~VAR_0;
    FUNC_6(VAR_11);
   }
   VAR_11->acb_flags |=
    (VAR_2
    | VAR_1
    | VAR_3);
   VAR_11->rqbuf_firstindex = 0;
   VAR_11->rqbuf_lastindex = 0;
   VAR_11->wqbuf_firstindex = 0;
   VAR_11->wqbuf_lastindex = 0;
   VAR_31 = VAR_11->rqbuffer;
   FUNC_9(VAR_31, 0, sizeof (struct QBUFFER));
   VAR_31 = VAR_11->wqbuffer;
   FUNC_9(VAR_31, 0, sizeof (struct QBUFFER));
   VAR_13->cmdmessage.ReturnCode = VAR_7;
   FUNC_1(&VAR_11->qbuffer_lock);
  }
  break;
 case 131: {
   VAR_13->cmdmessage.ReturnCode = VAR_6;
  }
  break;
 case 129: {
   int8_t *VAR_32 = "Hello! I am ARCMSR";

   FUNC_8(VAR_13->messagedatabuffer, VAR_32
    , (int16_t)FUNC_11(VAR_32));
   VAR_13->cmdmessage.ReturnCode = VAR_7;
  }
  break;
 case 130:
  FUNC_7(VAR_11);
  break;
 case 133:
  FUNC_4(VAR_11);
  break;
 default:
  VAR_14 = VAR_5;
 }
message_out:
 return (VAR_14);
}
