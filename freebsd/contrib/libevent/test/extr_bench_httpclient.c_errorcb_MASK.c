
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct request_info {int started; scalar_t__ n_read; } ;
struct bufferevent {int dummy; } ;


 short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct bufferevent*,int) ;
 int FUNC_1 (struct bufferevent*) ;
 int FUNC_2 (struct bufferevent*,int *,int *,int *,int *) ;
 int FUNC_3 (struct timeval*,int *) ;
 int FUNC_4 (struct timeval*,int *,int *) ;
 int FUNC_5 (struct timeval*,int *,struct timeval*) ;
 int FUNC_6 (struct request_info*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_10(struct bufferevent *VAR_9, short VAR_10, void *VAR_11)
{
 struct request_info *VAR_12 = VAR_11;
 struct timeval VAR_13, VAR_14;
 if (VAR_10 & VAR_0) {
  ++VAR_6;
  VAR_4 += VAR_12->n_read;
  FUNC_3(&VAR_13, ((void*)0));
  FUNC_5(&VAR_13, &VAR_12->started, &VAR_14);
  FUNC_4(&VAR_14, &VAR_8, &VAR_8);

  if (VAR_6 && (VAR_6%1000)==0)
   FUNC_9("%d requests done\n",VAR_6);

  if (VAR_7 < VAR_3) {
   if (FUNC_7() < 0)
    FUNC_8("Can't launch");
  }
 } else {
  ++VAR_5;
  FUNC_8("Unexpected error");
 }

 FUNC_2(VAR_9, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
 FUNC_6(VAR_12);
 FUNC_0(VAR_9, VAR_1|VAR_2);
 FUNC_1(VAR_9);
}
