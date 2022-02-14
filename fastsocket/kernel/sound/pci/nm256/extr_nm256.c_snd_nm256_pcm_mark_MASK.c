
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nm256_stream {int cur_period; int periods; int period_size; scalar_t__ buf; } ;
struct nm256 {int dummy; } ;


 int FUNC_0 (struct nm256*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct nm256 *VAR_0, struct nm256_stream *VAR_1, int VAR_2)
{
 VAR_1->cur_period++;
 VAR_1->cur_period %= VAR_1->periods;
 FUNC_0(VAR_0, VAR_2, VAR_1->buf + VAR_1->cur_period * VAR_1->period_size);
}
