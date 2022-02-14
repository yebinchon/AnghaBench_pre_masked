
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a10hdmiaudio_chinfo {unsigned int pos; int channel; scalar_t__ run; scalar_t__ blocksize; int buffer; } ;


 int FUNC_0 (struct a10hdmiaudio_chinfo*) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0)
{
 struct a10hdmiaudio_chinfo *VAR_1 = VAR_0;
 unsigned VAR_2;

 VAR_2 = FUNC_2(VAR_1->buffer);

 VAR_1->pos += VAR_1->blocksize;
 if (VAR_1->pos >= VAR_2)
  VAR_1->pos -= VAR_2;

 if (VAR_1->run) {
  FUNC_1(VAR_1->channel);
  FUNC_0(VAR_1);
 }
}
