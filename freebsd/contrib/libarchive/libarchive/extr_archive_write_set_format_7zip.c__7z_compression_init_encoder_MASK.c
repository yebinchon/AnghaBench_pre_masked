
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct archive_write {int archive; scalar_t__ format_data; } ;
struct TYPE_7__ {int avail_out; scalar_t__ total_out; int next_out; scalar_t__ total_in; } ;
struct _7zip {TYPE_1__ stream; int wbuff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,int,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int) ;
 int FUNC_4 (int *,TYPE_1__*,int) ;
 int FUNC_5 (int *,TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct archive_write *VAR_3, unsigned VAR_4,
    int VAR_5)
{
 struct _7zip *VAR_6;
 int VAR_7;

 VAR_6 = (struct _7zip *)VAR_3->format_data;
 switch (VAR_4) {
 case 131:
  VAR_7 = FUNC_2(
      &(VAR_3->archive), &(VAR_6->stream),
      VAR_5, 0);
  break;
 case 133:
  VAR_7 = FUNC_0(
      &(VAR_3->archive), &(VAR_6->stream),
      VAR_5);
  break;
 case 130:
  VAR_7 = FUNC_3(
      &(VAR_3->archive), &(VAR_6->stream),
      VAR_5);
  break;
 case 129:
  VAR_7 = FUNC_4(
      &(VAR_3->archive), &(VAR_6->stream),
      VAR_5);
  break;
 case 128:
  VAR_7 = FUNC_5(
      &(VAR_3->archive), &(VAR_6->stream),
      VAR_2, VAR_1);
  break;
 case 132:
 default:
  VAR_7 = FUNC_1(
      &(VAR_3->archive), &(VAR_6->stream));
  break;
 }
 if (VAR_7 == VAR_0) {
  VAR_6->stream.total_in = 0;
  VAR_6->stream.next_out = VAR_6->wbuff;
  VAR_6->stream.avail_out = sizeof(VAR_6->wbuff);
  VAR_6->stream.total_out = 0;
 }

 return (VAR_7);
}
