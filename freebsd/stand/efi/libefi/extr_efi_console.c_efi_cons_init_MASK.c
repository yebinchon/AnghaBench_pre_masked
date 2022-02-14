
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ (* OpenProtocol ) (int ,int *,void**,int ,int *,int ) ;} ;
struct TYPE_6__ {int ConsoleInHandle; int * ConIn; TYPE_1__* ConOut; } ;
struct TYPE_5__ {int (* EnableCursor ) (TYPE_1__*,int ) ;} ;
typedef scalar_t__ EFI_STATUS ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 TYPE_1__* VAR_8 ;
 scalar_t__ FUNC_0 () ;
 int VAR_9 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int ,int *,void**,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_3(int VAR_10)
{
 EFI_STATUS VAR_11;

 if (VAR_6 != ((void*)0))
  return (0);

 VAR_8 = VAR_4->ConOut;
 VAR_6 = VAR_4->ConIn;

 VAR_8->EnableCursor(VAR_8, VAR_5);
 VAR_11 = VAR_0->OpenProtocol(VAR_4->ConsoleInHandle, &VAR_9,
     (void **)&VAR_7, VAR_3, ((void*)0), VAR_1);
 if (VAR_11 != VAR_2)
  VAR_7 = ((void*)0);

 if (FUNC_0())
  return (0);

 return (1);
}
