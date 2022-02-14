
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct mpt_softc {int dummy; } ;
struct TYPE_14__ {int index; TYPE_5__* req_vbuf; } ;
typedef TYPE_2__ request_t ;
struct TYPE_15__ {scalar_t__ Action; int PageAddress; int PageType; scalar_t__ PageLength; int ExtPageType; int ExtPageLength; int PageNumber; int PageVersion; } ;
typedef TYPE_3__ cfgparms_t ;
typedef int bus_size_t ;
typedef int bus_addr_t ;
struct TYPE_13__ {int PageType; scalar_t__ PageLength; int PageNumber; int PageVersion; } ;
struct TYPE_17__ {scalar_t__ Action; void* MsgContext; int PageBufferSGE; TYPE_1__ Header; int ExtPageType; int ExtPageLength; void* PageAddress; int Function; } ;
struct TYPE_16__ {int FlagsLength; void* Address; } ;
typedef TYPE_4__ SGE_SIMPLE32 ;
typedef TYPE_5__ MSG_CONFIG ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 int FUNC_5 (struct mpt_softc*) ;
 int FUNC_6 (struct mpt_softc*,TYPE_2__*) ;
 int FUNC_7 (struct mpt_softc*,TYPE_2__*,int ,int ,int,int) ;

int
FUNC_8(struct mpt_softc *VAR_13, request_t *VAR_14, cfgparms_t *VAR_15,
    bus_addr_t VAR_16, bus_size_t VAR_17, int VAR_18, int VAR_19)
{
 MSG_CONFIG *VAR_20;
 SGE_SIMPLE32 *VAR_21;

 VAR_20 = VAR_14->req_vbuf;
 FUNC_4(VAR_20, 0, sizeof *VAR_20);
 VAR_20->Action = VAR_15->Action;
 VAR_20->Function = VAR_4;
 VAR_20->Header.PageVersion = VAR_15->PageVersion;
 VAR_20->Header.PageNumber = VAR_15->PageNumber;
 VAR_20->PageAddress = FUNC_3(VAR_15->PageAddress);
 if ((VAR_15->PageType & VAR_3) ==
     VAR_2) {
  VAR_20->Header.PageType = VAR_2;
  VAR_20->Header.PageLength = 0;
  VAR_20->ExtPageLength = FUNC_2(VAR_15->ExtPageLength);
  VAR_20->ExtPageType = VAR_15->ExtPageType;
 } else {
  VAR_20->Header.PageType = VAR_15->PageType;
  VAR_20->Header.PageLength = VAR_15->PageLength;
 }
 VAR_21 = (SGE_SIMPLE32 *)&VAR_20->PageBufferSGE;
 VAR_21->Address = FUNC_3(VAR_16);
 FUNC_1(VAR_21, VAR_17);
 FUNC_0(VAR_21, (VAR_10 |
     VAR_9 | VAR_5 |
     VAR_6 |
     ((VAR_15->Action == VAR_0
   || VAR_15->Action == VAR_1)
    ? VAR_7 : VAR_8)));
 VAR_21->FlagsLength = FUNC_3(VAR_21->FlagsLength);
 VAR_20->MsgContext = FUNC_3(VAR_14->index | VAR_11);

 FUNC_5(VAR_13);
 FUNC_6(VAR_13, VAR_14);
 return (FUNC_7(VAR_13, VAR_14, VAR_12, VAR_12,
        VAR_18, VAR_19));
}
