
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct in_addr {int s_addr; } ;
struct TYPE_8__ {int sin_len; struct in_addr sin_addr; scalar_t__ sin_family; } ;
struct TYPE_7__ {scalar_t__ ss_family; } ;
struct TYPE_9__ {TYPE_2__ sin; TYPE_1__ ss; } ;
typedef TYPE_3__ sockunion_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 size_t FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 TYPE_3__* FUNC_4 (scalar_t__,int) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int,scalar_t__,struct sockaddr*,int,scalar_t__*,scalar_t__*,struct sockaddr_storage*) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 int FUNC_8 (int ) ;

int
FUNC_9(int VAR_5, struct in_addr VAR_6, struct in_addr VAR_7,
    uint32_t *VAR_8, uint32_t *VAR_9, struct in_addr *VAR_10)
{
 sockunion_t *VAR_11, *VAR_12;
 sockunion_t VAR_13;
 struct in_addr *VAR_14;
 int VAR_15;
 size_t VAR_16;
 uint32_t VAR_17, VAR_18;

 FUNC_3(VAR_5 != -1);
 FUNC_3(VAR_8 != ((void*)0));
 FUNC_3(VAR_9 != ((void*)0));

 VAR_18 = *VAR_9;
 *VAR_9 = 0;
 VAR_12 = ((void*)0);

 if (!FUNC_0(FUNC_8(VAR_7.s_addr)) ||
     (VAR_18 != 0 && VAR_10 == ((void*)0))) {
  VAR_4 = VAR_2;
  return (-1);
 }

 VAR_17 = FUNC_2(VAR_6.s_addr);
 if (VAR_17 == 0) {
  VAR_4 = VAR_1;
  return (-1);
 }

 FUNC_7(&VAR_13, 0, sizeof(sockunion_t));
 VAR_13.sin.sin_family = VAR_0;
 VAR_13.sin.sin_len = sizeof(struct sockaddr_in);
 VAR_13.sin.sin_addr = VAR_7;

 if (VAR_18 != 0 || VAR_10 != ((void*)0)) {
  VAR_12 = FUNC_4(VAR_18, sizeof(sockunion_t));
  if (VAR_12 == ((void*)0)) {
   VAR_4 = VAR_3;
   return (-1);
  }
 }

 VAR_15 = FUNC_6(VAR_5, VAR_17, (struct sockaddr *)&VAR_13,
     sizeof(struct sockaddr_in), VAR_8, VAR_9,
     (struct sockaddr_storage *)VAR_12);

 if (VAR_12 != ((void*)0) && *VAR_9 != 0) {
  VAR_14 = VAR_10;
  VAR_11 = VAR_12;
  for (VAR_16 = 0; VAR_16 < FUNC_1(VAR_18, *VAR_9); VAR_16++, VAR_11++) {
   if (VAR_11->ss.ss_family != VAR_0)
    continue;
   *VAR_14++ = VAR_11->sin.sin_addr;
  }
  FUNC_5(VAR_12);
 }

 return (VAR_15);
}
