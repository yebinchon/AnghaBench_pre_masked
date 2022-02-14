
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {scalar_t__ stream; struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {int avail_min; scalar_t__ hw_ptr; scalar_t__ appl_ptr; scalar_t__ buffer_size; int * buffer; scalar_t__ avail; int * event; int tasklet; int sleep; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_rawmidi_runtime*) ;
 int * FUNC_2 (scalar_t__,int ) ;
 struct snd_rawmidi_runtime* FUNC_3 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct snd_rawmidi_substream *VAR_6)
{
 struct snd_rawmidi_runtime *VAR_7;

 if ((VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1)) == ((void*)0))
  return -VAR_0;
 FUNC_4(&VAR_7->lock);
 FUNC_0(&VAR_7->sleep);
 if (VAR_6->stream == VAR_3)
  FUNC_5(&VAR_7->tasklet,
        VAR_4,
        (unsigned long)VAR_6);
 else
  FUNC_5(&VAR_7->tasklet,
        VAR_5,
        (unsigned long)VAR_6);
 VAR_7->event = ((void*)0);
 VAR_7->buffer_size = VAR_2;
 VAR_7->avail_min = 1;
 if (VAR_6->stream == VAR_3)
  VAR_7->avail = 0;
 else
  VAR_7->avail = VAR_7->buffer_size;
 if ((VAR_7->buffer = FUNC_2(VAR_7->buffer_size, VAR_1)) == ((void*)0)) {
  FUNC_1(VAR_7);
  return -VAR_0;
 }
 VAR_7->appl_ptr = VAR_7->hw_ptr = 0;
 VAR_6->runtime = VAR_7;
 return 0;
}
