
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct perf_hpp {char* buf; int size; double* ptr; } ;
struct hist_entry {scalar_t__ row_offset; int sorted_chain; int ms; } ;
struct TYPE_7__ {int width; unsigned short height; int navkeypressed; } ;
struct hist_browser {struct hist_entry* he_selection; TYPE_1__ b; int hists; int * selection; } ;
typedef int s ;
typedef scalar_t__ off_t ;
struct TYPE_9__ {scalar_t__ (* entry ) (struct perf_hpp*,struct hist_entry*) ;scalar_t__ (* color ) (struct perf_hpp*,struct hist_entry*) ;int cond; } ;
struct TYPE_8__ {scalar_t__ use_callchain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct hist_browser*,int *,int,unsigned short,scalar_t__*,int*) ;
 char FUNC_1 (struct hist_entry*) ;
 int FUNC_2 (struct hist_entry*) ;
 int FUNC_3 (struct hist_entry*,char*,int,int ) ;
 TYPE_6__* VAR_3 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (struct perf_hpp*,struct hist_entry*) ;
 scalar_t__ FUNC_7 (struct perf_hpp*,struct hist_entry*) ;
 TYPE_5__ VAR_4 ;
 int FUNC_8 (TYPE_1__*,unsigned short,int ) ;
 int FUNC_9 (TYPE_1__*,unsigned short) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,double,int) ;

__attribute__((used)) static int FUNC_12(struct hist_browser *VAR_5,
        struct hist_entry *VAR_6,
        unsigned short VAR_7)
{
 char VAR_8[256];
 double VAR_9;
 int VAR_10, VAR_11 = 0;
 int VAR_12 = VAR_5->b.width;
 char VAR_13 = ' ';
 bool VAR_14 = FUNC_9(&VAR_5->b, VAR_7);
 off_t VAR_15 = VAR_6->row_offset;
 bool VAR_16 = 1;

 if (VAR_14) {
  VAR_5->he_selection = VAR_6;
  VAR_5->selection = &VAR_6->ms;
 }

 if (VAR_4.use_callchain) {
  FUNC_2(VAR_6);
  VAR_13 = FUNC_1(VAR_6);
 }

 if (VAR_15 == 0) {
  struct perf_hpp VAR_17 = {
   .buf = VAR_8,
   .size = sizeof(VAR_8),
  };

  FUNC_8(&VAR_5->b, VAR_7, 0);

  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
   if (!VAR_3[VAR_10].cond)
    continue;

   if (!VAR_16) {
    FUNC_4("  ");
    VAR_12 -= 2;
   }
   VAR_16 = 0;

   if (VAR_3[VAR_10].color) {
    VAR_17.ptr = &VAR_9;

    VAR_12 -= VAR_3[VAR_10].color(&VAR_17, VAR_6);

    FUNC_11(&VAR_5->b, VAR_9, VAR_14);

    if (VAR_10 == VAR_2 && VAR_4.use_callchain) {
     FUNC_4("%c ", VAR_13);
     VAR_12 -= 2;
    }

    FUNC_4("%s", VAR_8);

    if (!VAR_14 || !VAR_5->b.navkeypressed)
     FUNC_10(&VAR_5->b, VAR_0);
   } else {
    VAR_12 -= VAR_3[VAR_10].entry(&VAR_17, VAR_6);
    FUNC_4("%s", VAR_8);
   }
  }


  if (!VAR_5->b.navkeypressed)
   VAR_12 += 1;

  FUNC_3(VAR_6, VAR_8, sizeof(VAR_8), VAR_5->hists);
  FUNC_5(VAR_8, VAR_12);
  ++VAR_7;
  ++VAR_11;
 } else
  --VAR_15;

 if (VAR_13 == '-' && VAR_7 != VAR_5->b.height) {
  VAR_11 += FUNC_0(VAR_5, &VAR_6->sorted_chain,
       1, VAR_7, &VAR_15,
       &VAR_14);
  if (VAR_14)
   VAR_5->he_selection = VAR_6;
 }

 return VAR_11;
}
