
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
typedef int time_t ;
struct ssh {TYPE_1__* chanctxt; } ;
typedef int fd_set ;
typedef int fd_mask ;
struct TYPE_2__ {int channel_max_fd; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ssh*) ;
 int FUNC_2 (struct ssh*,int ,int *,int *,int *) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct ssh*) ;
 int * FUNC_7 (int *,int,int) ;

void
FUNC_8(struct ssh *VAR_3, fd_set **VAR_4, fd_set **VAR_5,
    int *VAR_6, u_int *VAR_7, time_t *VAR_8)
{
 u_int VAR_9, VAR_10, VAR_11;

 FUNC_1(VAR_3);

 VAR_9 = FUNC_0(*VAR_6, VAR_3->chanctxt->channel_max_fd);

 VAR_11 = FUNC_4(VAR_9+1, VAR_1);

 if (VAR_11 && VAR_2 / VAR_11 < sizeof(fd_mask))
  FUNC_3("channel_prepare_select: max_fd (%d) is too large", VAR_9);
 VAR_10 = VAR_11 * sizeof(fd_mask);


 if (*VAR_4 == ((void*)0) || VAR_10 > *VAR_7) {
  *VAR_4 = FUNC_7(*VAR_4, VAR_11, sizeof(fd_mask));
  *VAR_5 = FUNC_7(*VAR_5, VAR_11, sizeof(fd_mask));
  *VAR_7 = VAR_10;
 }
 *VAR_6 = VAR_9;
 FUNC_5(*VAR_4, 0, VAR_10);
 FUNC_5(*VAR_5, 0, VAR_10);

 if (!FUNC_6(VAR_3))
  FUNC_2(VAR_3, VAR_0, *VAR_4, *VAR_5,
      VAR_8);
}
