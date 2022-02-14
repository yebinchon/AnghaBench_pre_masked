
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int warc_type_t ;
struct TYPE_8__ {unsigned int len; char* str; } ;
typedef TYPE_3__ warc_string_t ;
typedef scalar_t__ time_t ;
struct TYPE_7__ {unsigned int len; char* str; } ;
struct warc_s {unsigned int pver; unsigned int cntoff; TYPE_2__ pool; scalar_t__ cntlen; int sver; } ;
struct TYPE_9__ {int archive_format; } ;
struct archive_read {TYPE_4__ archive; TYPE_1__* format; } ;
struct archive_entry {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_6__ {struct warc_s* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 char* FUNC_0 (struct archive_read*,int ,scalar_t__*) ;
 int FUNC_1 (struct archive_read*,int) ;
 char* FUNC_2 (char const*,scalar_t__) ;
 scalar_t__ FUNC_3 (char const*,int) ;
 scalar_t__ FUNC_4 (char const*,int) ;
 scalar_t__ FUNC_5 (char const*,int) ;
 int FUNC_6 (char const*,int) ;
 TYPE_3__ FUNC_7 (char const*,int) ;
 unsigned int FUNC_8 (char const*,int) ;
 int FUNC_9 (struct archive_read*) ;
 int FUNC_10 (struct archive_entry*,char*) ;
 int FUNC_11 (struct archive_entry*,scalar_t__,long) ;
 int FUNC_12 (struct archive_entry*,int ) ;
 int FUNC_13 (struct archive_entry*,scalar_t__,long) ;
 int FUNC_14 (struct archive_entry*,int) ;
 int FUNC_15 (struct archive_entry*,scalar_t__) ;
 int FUNC_16 (TYPE_4__*,int ,char*,...) ;
 int FUNC_17 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_18 (char*,char*,unsigned int) ;
 char* FUNC_19 (char*,unsigned int) ;

__attribute__((used)) static int
FUNC_20(struct archive_read *VAR_8, struct archive_entry *VAR_9)
{

 struct warc_s *VAR_10 = VAR_8->format->data;
 unsigned int VAR_11;
 const char *VAR_12;
 ssize_t VAR_13;
 const char *VAR_14;

 warc_string_t VAR_15;

 warc_type_t VAR_16;

 ssize_t VAR_17;

 time_t VAR_18;

 time_t VAR_19;

start_over:



 VAR_12 = FUNC_0(VAR_8, (12U), &VAR_13);

 if (VAR_13 < 0) {

  FUNC_16(
   &VAR_8->archive, VAR_2,
   "Bad record header");
  return (VAR_3);
 } else if (VAR_12 == ((void*)0)) {


  return (VAR_1);
 }

 VAR_14 = FUNC_2(VAR_12, VAR_13);
 if (VAR_14 == ((void*)0)) {



  FUNC_16(
   &VAR_8->archive, VAR_2,
   "Bad record header");
  return (VAR_3);
 }
 VAR_11 = FUNC_8(VAR_12, VAR_14 - VAR_12);

 if (VAR_11 == 0U) {
  FUNC_16(
   &VAR_8->archive, VAR_2,
   "Invalid record version");
  return (VAR_3);
 } else if (VAR_11 < 1200U || VAR_11 > 10000U) {
  FUNC_16(
   &VAR_8->archive, VAR_2,
   "Unsupported record version: %u.%u",
   VAR_11 / 10000, (VAR_11 % 10000) / 100);
  return (VAR_3);
 }
 VAR_17 = FUNC_3(VAR_12, VAR_14 - VAR_12);
 if (VAR_17 < 0) {


  FUNC_16(
   &VAR_8->archive, VAR_6,
   "Bad content length");
  return (VAR_3);
 }
 VAR_18 = FUNC_5(VAR_12, VAR_14 - VAR_12);
 if (VAR_18 == (time_t)-1) {


  FUNC_16(
   &VAR_8->archive, VAR_6,
   "Bad record time");
  return (VAR_3);
 }


 VAR_8->archive.archive_format = VAR_4;
 if (VAR_11 != VAR_10->pver) {

  FUNC_17(&VAR_10->sver,
   "WARC/%u.%u", VAR_11 / 10000, (VAR_11 % 10000) / 100);

  VAR_10->pver = VAR_11;
 }

 VAR_16 = FUNC_6(VAR_12, VAR_14 - VAR_12);

 VAR_10->cntlen = VAR_17;
 VAR_10->cntoff = 0U;
 VAR_19 = 0;

 switch (VAR_16) {
 case 128:
 case 129:


  VAR_15 = FUNC_7(VAR_12, VAR_14 - VAR_12);


  if (VAR_15.len == 0 || VAR_15.str[VAR_15.len - 1] == '/') {

   VAR_15.len = 0U;
   VAR_15.str = ((void*)0);
   break;
  }


  if (VAR_15.len + 1U > VAR_10->pool.len) {
   VAR_10->pool.len = ((VAR_15.len + 64U) / 64U) * 64U;
   VAR_10->pool.str = FUNC_19(VAR_10->pool.str, VAR_10->pool.len);
  }
  FUNC_18(VAR_10->pool.str, VAR_15.str, VAR_15.len);
  VAR_10->pool.str[VAR_15.len] = '\0';

  VAR_15.str = VAR_10->pool.str;





  if ((VAR_19 = FUNC_4(VAR_12, VAR_14 - VAR_12)) == (time_t)-1) {
   VAR_19 = VAR_18;
  }
  break;
 default:
  VAR_15.len = 0U;
  VAR_15.str = ((void*)0);
  break;
 }


 FUNC_1(VAR_8, VAR_14 - VAR_12);

 switch (VAR_16) {
 case 128:
 case 129:
  if (VAR_15.len > 0U) {

   FUNC_12(VAR_9, VAR_0);
   FUNC_10(VAR_9, VAR_15.str);
   FUNC_15(VAR_9, VAR_17);
   FUNC_14(VAR_9, 0644);

   FUNC_11(VAR_9, VAR_18, 0L);
   FUNC_13(VAR_9, VAR_19, 0L);
   break;
  }

 default:

  FUNC_9(VAR_8);
  goto start_over;
 }
 return (VAR_5);
}
