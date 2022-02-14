
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nm256_stream {scalar_t__ substream; scalar_t__ running; } ;
struct nm256 {int reg_lock; struct nm256_stream* streams; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct nm256*,struct nm256_stream*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct nm256 *VAR_1)
{
 struct nm256_stream *VAR_2;

 VAR_2 = &VAR_1->streams[VAR_0];
 if (VAR_2->running && VAR_2->substream) {
  FUNC_3(&VAR_1->reg_lock);
  FUNC_1(VAR_2->substream);
  FUNC_2(&VAR_1->reg_lock);
  FUNC_0(VAR_1, VAR_2);
 }
}
