
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ua101_stream {unsigned int queue_length; TYPE_1__** urbs; } ;
struct ua101 {TYPE_2__* dev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int urb; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct ua101 *VAR_1, struct ua101_stream *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->queue_length; ++VAR_3) {
  int VAR_4 = FUNC_2(&VAR_2->urbs[VAR_3]->urb, VAR_0);
  if (VAR_4 < 0) {
   FUNC_0(&VAR_1->dev->dev, "USB request error %d: %s\n",
    VAR_4, FUNC_1(VAR_4));
   return VAR_4;
  }
 }
 return 0;
}
